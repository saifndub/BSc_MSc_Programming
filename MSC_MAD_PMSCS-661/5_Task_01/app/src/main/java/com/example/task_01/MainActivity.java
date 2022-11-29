package com.example.task_01;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

public class MainActivity extends AppCompatActivity {
    private EditText Temp, Sat, Beat;
    private Button ok;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Temp = (EditText) findViewById(R.id.bTemp);
        Sat = (EditText) findViewById(R.id.oSat);
        Beat = (EditText) findViewById(R.id.hBeat);
        ok = (Button) findViewById(R.id.btnok);

        ok.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {


            }
        }

    }
}