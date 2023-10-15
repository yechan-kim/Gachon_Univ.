package OOP.Kiosk.v2;

import OOP.Kiosk.v1.*;

import com.google.gson.Gson;
import com.google.gson.JsonArray;
import com.google.gson.JsonObject;
import com.google.gson.reflect.TypeToken;

import java.io.FileReader;
import java.io.Reader;
import java.util.List;

public class KioskNew extends KioskApp {

    public KioskNew() {
        super();
    }

    @Override
    protected void loadData() {
        try {
            Reader reader = new FileReader("src/menu.json");
            JsonObject jsonObject = new Gson().fromJson(reader, JsonObject.class);
            JsonArray jsonArray = jsonObject.getAsJsonArray("menu");

            Gson gson = new Gson();
            menus = gson.fromJson(jsonArray, new TypeToken<List<Menu>>() {
            }.getType());
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
    }

    public static void main(String[] args) {
        KioskNew kiosk = new KioskNew();
    }
}
