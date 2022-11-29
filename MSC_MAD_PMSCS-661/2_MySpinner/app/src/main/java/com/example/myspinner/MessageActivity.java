package com.example.myspinner;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;

public class MessageActivity extends AppCompatActivity {
    private TextView textShow;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_message);

        textShow = findViewById(R.id.textView2);
        String rec_msg = getIntent().getStringExtra("msg");
        textShow.setText("You have selected "+rec_msg);
    }
}