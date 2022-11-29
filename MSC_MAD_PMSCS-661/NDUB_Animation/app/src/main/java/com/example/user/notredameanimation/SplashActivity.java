package com.example.user.notredameanimation;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;

public class SplashActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_splash);

        Thread th = new Thread(){
            @Override
            public void run() {
                super.run();
                try {
                    sleep(3000);
                    Intent i = new Intent(SplashActivity.this,MainActivity.class);
                    startActivity(i);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }

            }
        };

        th.start();
    }

    @Override
    protected void onPause() {
        super.onPause();

        finish();
    }
}
