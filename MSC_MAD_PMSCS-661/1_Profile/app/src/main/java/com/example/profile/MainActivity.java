package com.example.profile;
import androidx.appcompat.app.AppCompatActivity;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageView;
public class MainActivity extends AppCompatActivity {
    ImageView cl,fb,tw,em,ln,yt;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        cl = findViewById(R.id.dial);
        fb = findViewById(R.id.facebook);
        tw = findViewById(R.id.twtter);
        em = findViewById(R.id.email);
        ln = findViewById(R.id.linkedin);
        yt = findViewById(R.id.youtube);
        cl.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent callingIntent = new Intent(Intent.ACTION_DIAL);
                callingIntent.setData(Uri.parse("tel:+8801770805875"));
                startActivity(callingIntent);
            }
        });
        fb.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                gotoUrl("https://www.facebook.com/saifndub");
            }
        });
        tw.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                gotoUrl("https://www.twitter.com/saifndub/");
            }
        });
        em.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                gotoUrl("https://mail.google.com/mail/u/0/#inbox?compose=new");
            }
        });
        ln.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                gotoUrl("https://www.linkedin.com/in/saifndub/");
            }
        });

        yt.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                gotoUrl("https://youtu.be/kdsVhpjAuRs");
            }
        });
    }
    private void gotoUrl(String s) {
        Uri uri = Uri.parse(s);
        startActivity(new Intent(Intent.ACTION_VIEW,uri));
    }
}
