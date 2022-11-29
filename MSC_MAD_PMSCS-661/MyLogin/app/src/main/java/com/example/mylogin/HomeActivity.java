package com.example.mylogin;

import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;

import android.database.Cursor;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ListView;
import android.widget.SimpleCursorAdapter;
import android.widget.Toast;

public class HomeActivity extends AppCompatActivity {
    DBHelper databaseAdapter;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_home);

        databaseAdapter = new DBHelper(this);
        ListView lvContact = findViewById(R.id.lvContact);
        final SimpleCursorAdapter simpleCursorAdapter = databaseAdapter.populateListViewFromDB();
        lvContact.setAdapter(simpleCursorAdapter);
        lvContact.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
                Cursor cursor = (Cursor) simpleCursorAdapter.getItem(position);
                String name = cursor.getString(1);
                Toast.makeText(HomeActivity.this, name, Toast.LENGTH_LONG).show();
            }
        });
    }
}