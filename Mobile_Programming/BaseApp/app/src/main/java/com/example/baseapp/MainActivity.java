package com.example.baseapp;

import android.content.Intent;
import android.graphics.Color;
import android.net.Uri;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {
    Button button1, btnNate, btn911, btnGal, btnEnd;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        button1 = (Button) findViewById(R.id.button1);
        btnNate = (Button) findViewById(R.id.btnNate);
        btn911 = (Button) findViewById(R.id.btn911);
        btnGal = (Button) findViewById(R.id.btnGal);
        btnEnd = (Button) findViewById(R.id.btnEnd);

        btnNate.setBackgroundColor(Color.GRAY);
        btn911.setBackgroundColor(Color.GREEN);
        btnGal.setBackgroundColor(Color.RED);
        btnEnd.setBackgroundColor(Color.YELLOW);

        btnNate.setTextColor(Color.BLACK);
        btn911.setTextColor(Color.BLACK);
        btnGal.setTextColor(Color.BLACK);
        btnEnd.setTextColor(Color.BLACK);


        button1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Toast.makeText(getApplicationContext(), "버튼을 눌렀어요",
                        Toast.LENGTH_SHORT).show();
            }
        });

        btnNate.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent myIntent = new Intent(Intent.ACTION_VIEW,
                        Uri.parse("http://www.nate.com"));
                startActivity(myIntent);
            }
        });

        btn911.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent myIntent = new Intent(Intent.ACTION_VIEW,
                        Uri.parse("tel:/911"));
                startActivity(myIntent);
            }
        });

        btnGal.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent myIntent = new Intent(Intent.ACTION_VIEW,
                        Uri.parse("content://media/internal/images/media"));
                startActivity(myIntent);
            }
        });

        btnEnd.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                finish();
            }
        });
    }
}