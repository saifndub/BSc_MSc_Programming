package com.example.myspinner;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.Spinner;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    String[] itemName;
    private Spinner spinner;
    private TextView textView;
    private Button button;
    ArrayAdapter<String> adapter;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        itemName=getResources().getStringArray(R.array.item_names);
        spinner=(Spinner) findViewById(R.id.spinnerId);
        textView= (TextView) findViewById(R.id.textViewId);
        button= (Button) findViewById(R.id.buttonId);

        adapter = new ArrayAdapter<String>(this,R.layout.support_simple_spinner_dropdown_item,itemName);
        spinner.setAdapter(adapter);

        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String value = spinner.getSelectedItem().toString();
                //textView.setText(value);
                Intent i = new Intent(MainActivity.this,MessageActivity.class);
                i.putExtra("msg",value);
                startActivity(i);
            }
        });
    }
}