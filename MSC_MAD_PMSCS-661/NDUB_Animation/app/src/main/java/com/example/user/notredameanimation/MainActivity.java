package com.example.user.notredameanimation;

import android.graphics.drawable.AnimationDrawable;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.animation.Animation;
import android.widget.ImageView;

public class MainActivity extends AppCompatActivity {

    ImageView imgAnim;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        imgAnim = findViewById(R.id.img_anim);
         AnimationDrawable anim =
                 (AnimationDrawable)imgAnim.getBackground();
        anim.start();
    }
}
