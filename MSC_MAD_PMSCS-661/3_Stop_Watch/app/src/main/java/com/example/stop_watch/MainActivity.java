package com.example.stop_watch;

import androidx.appcompat.app.AppCompatActivity;
import androidx.core.view.accessibility.AccessibilityViewCommand;

import android.os.Bundle;
import android.os.Handler;
import android.view.View;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    private int seconds=0;
    private boolean running;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        starttimer();
    }
    public void onstart(View view){
        running= true;
    }
    public void onstop(View view){
        running=false;
    }
    public void onreset(View view){
        running=false;
        seconds=0;
    }
    private void starttimer(){
        final TextView timer=findViewById(R.id.timer);
        Handler handler = new Handler();
        boolean post = handler.post(new Runnable() {
            @Override
            public void run() {
                int hrs = seconds / 3600;
                int mins = (seconds % 3600) / 60;
                int secs = seconds % 60;
                String time = String.format("%02d:%02d:%02d", hrs, mins, secs);
                timer.setText(time);
                if (running) {
                    seconds++;
                }
                handler.postDelayed(this,1000 );
            }
        });

    }
}