import paho.mqtt.client as mqtt

normal_temp = 22.4
MQTT_Broker = "test.mosquitto.org"
DATA_TOPIC = '/dht/CCL'
COMMAND_TOPIC = '/cmd/CCL'


def on_connect(mqtt, obj, flags, reason_code, properties):
    print("Connected with result code: " + str(reason_code))
    mqtt.subscribe(DATA_TOPIC)


# Dictionary to store the previous status of each sensor
sensor_states = {}

def on_message(mqtt, obj, msg):
    payload = msg.payload.decode('utf-8')
    sensor_data = eval(payload)

    if sensor_data.get("Serial") == "KimYeChan":
        print(f"Received sensor data: {payload}")

    try:
        temperature = sensor_data.get("Temperature")
        name = sensor_data.get("Serial")

        if temperature is not None:
            prev_state = sensor_states.get(name, None)
            new_state = "on" if temperature > normal_temp else "off"

            if new_state != prev_state:
                mqtt.publish(COMMAND_TOPIC, name + "-" + new_state)
                sensor_states[name] = new_state
        else:
            print("Temperature data missing in payload")
    except Exception as e:
        print(f"Error parsing message: {e}")


def on_subscribe(mqtt, obj, mid, reason_code_list, properties):
    print(f"Subscribed to topic: {DATA_TOPIC}")


mqtt = mqtt.Client(mqtt.CallbackAPIVersion.VERSION2)
mqtt.on_connect = on_connect
mqtt.on_message = on_message
mqtt.on_subscribe = on_subscribe

mqtt.connect(MQTT_Broker, 1883, 60)
mqtt.loop_forever()
