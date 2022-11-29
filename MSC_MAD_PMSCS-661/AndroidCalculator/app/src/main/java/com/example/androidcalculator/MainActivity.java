package com.example.androidcalculator;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity implements View.OnClickListener{

    Button btnBasic, btnScience;
    TextView txtDisplay, txtDisplay1;
    Button btnSeven, btnEight, btnNine, btnDel, btnAC, btnFour, btnFive,
            btnSix, btnMultiply, btnDivision, btnOne, btnTwo, btnThree, btnPlus, btnMinus,
            btnZero, btnDbZero, btnDot, btnPlusorMin, btnEqual;

    double fnum, snum, result;
    String text;
    String answer;
    String opt="";

    public int eq;
    public int flag;
    public MainActivity() {
        flag = 0;
        eq = 0;
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        btnBasic = findViewById(R.id.btn_basic);
        btnScience = findViewById(R.id.btn_sci);
        txtDisplay1 = findViewById(R.id.txt_display1);
        txtDisplay = findViewById(R.id.txt_display);
        btnOne = findViewById(R.id.btn_one);
        btnTwo = findViewById(R.id.btn_two);
        btnThree = findViewById(R.id.btn_three);
        btnFour = findViewById(R.id.btn_four);
        btnFive = findViewById(R.id.btn_five);
        btnSix = findViewById(R.id.btn_six);
        btnSeven = findViewById(R.id.btn_seven);
        btnEight = findViewById(R.id.btn_eight);
        btnNine = findViewById(R.id.btn_nine);
        btnZero = findViewById(R.id.btn_zero);
        btnDbZero = findViewById(R.id.btn_db_zero);
        btnDot = findViewById(R.id.btn_dot);
        btnPlus = findViewById(R.id.btn_plus);
        btnMinus = findViewById(R.id.btn_minus);
        btnMultiply = findViewById(R.id.btn_multiply);
        btnDivision = findViewById(R.id.btn_division);
        btnPlusorMin = findViewById(R.id.btn_plusormin);
        btnDel = findViewById(R.id.btn_del);
        btnAC = findViewById(R.id.btn_ac);
        btnEqual = findViewById(R.id.btn_equal);

        btnBasic.setOnClickListener(this);
        btnOne.setOnClickListener(this);
        btnTwo.setOnClickListener(this);
        btnThree.setOnClickListener(this);
        btnFour.setOnClickListener(this);
        btnFive.setOnClickListener(this);
        btnSix.setOnClickListener(this);
        btnSeven.setOnClickListener(this);
        btnEight.setOnClickListener(this);
        btnNine.setOnClickListener(this);
        btnZero.setOnClickListener(this);
        btnDbZero.setOnClickListener(this);
        btnDot.setOnClickListener(this);
        btnPlus.setOnClickListener(this);
        btnMinus.setOnClickListener(this);
        btnMultiply.setOnClickListener(this);
        btnDivision.setOnClickListener(this);
        btnPlusorMin.setOnClickListener(this);
        btnAC.setOnClickListener(this);
        btnDel.setOnClickListener(this);
        btnEqual.setOnClickListener(this);

        btnScience.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i = new Intent(MainActivity.this, Science.class);
                startActivity(i);
            }
        });

        /*btnTwo.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

            }
        });*/
    }

    public void flag(){
        if(flag==1){
            txtDisplay.setText("");
            flag=0;
        }
        if(eq==1){
            txtDisplay.setText("");
            eq=0;
        }
    }
    public void sum(){
        result = fnum + snum;
        answer = String.format("%.0f", result);
        txtDisplay.setText(answer);
    }
    public void sub(){
        result = fnum - snum;
        answer = String.format("%.0f", result);
        txtDisplay.setText(answer);
    }
    public void mul(){
        result = fnum * snum;
        answer = String.format("%.0f", result);
        txtDisplay.setText(answer);
    }
    public void div(){
        result = fnum / snum;
        answer = String.format("%.0f", result);
        txtDisplay.setText(answer);
    }

    public void calculate(){
        if(opt=="")
            fnum = Double.parseDouble(txtDisplay.getText().toString());
        else {
            snum = Double.parseDouble(txtDisplay.getText().toString());
            if (opt == "+") {
                sum();
                fnum = result;
            }
            else if(opt == "-")
            {
                sub();
                fnum = result;
            }
            else if(opt == "*")
            {
                mul();
                fnum = result;
            }
            else if(opt == "/")
            {
                div();
                fnum = result;
            }
        }
        flag=1;
    }
    public void equal(){
        snum = Double.parseDouble(txtDisplay.getText().toString());
        text = txtDisplay1.getText().toString();
        txtDisplay1.setText(text+txtDisplay.getText().toString());

        if (opt == "+") {
            sum();
        }
        else if(opt == "-")
        {
            sub();
        }
        else if(opt == "*")
        {
            mul();
        }
        else if(opt == "/")
        {
            div();
        }
        opt="";
        eq=1;
    }

    public void get_txt(){
        flag();
        text = txtDisplay.getText().toString();
    }
    public void calculation(){
        text = txtDisplay.getText().toString();
        txtDisplay1.setText(text+opt);
        flag();
    }
    @Override
    public void onClick(View v) {
        switch (v.getId()){
            case R.id.btn_one:
                get_txt();
                txtDisplay.setText(text+1);
                break;
            case R.id.btn_two:
                get_txt();
                txtDisplay.setText(text+2);
                break;
            case R.id.btn_three:
                get_txt();
                txtDisplay.setText(text+3);
                break;
            case R.id.btn_four:
                get_txt();
                txtDisplay.setText(text+4);
                break;
            case R.id.btn_five:
                get_txt();
                txtDisplay.setText(text+5);
                break;
            case R.id.btn_six:
                get_txt();
                txtDisplay.setText(text+6);
                break;
            case R.id.btn_seven:
                get_txt();
                txtDisplay.setText(text+7);
                break;
            case R.id.btn_eight:
                get_txt();
                txtDisplay.setText(text+8);
                break;
            case R.id.btn_nine:
                get_txt();
                txtDisplay.setText(text+9);
                break;
            case R.id.btn_zero:
                get_txt();
                txtDisplay.setText(text+0);
                break;
            case R.id.btn_db_zero:
                get_txt();
                txtDisplay.setText(text+0+0);
                break;
            case R.id.btn_dot:
                get_txt();
                txtDisplay.setText(text+".");
                break;
            case R.id.btn_plus:
//               fnum = (double) Double.parseDouble(txtDisplay);
                calculate();
                opt = "+";
                calculation();
                break;
            case R.id.btn_minus:
                calculate();
                opt = "-";
                calculation();
                break;
            case R.id.btn_multiply:
                calculate();
                opt = "*";
                calculation();
                break;
            case R.id.btn_division:
                calculate();
                opt = "/";
                calculation();
                break;
            case R.id.btn_del:
                int length = txtDisplay.getText().length();
                int number = txtDisplay.getText().length() - 1 ;
                if (length > 0){
                    StringBuilder back = new StringBuilder(txtDisplay.getText());
                    back.deleteCharAt(number);
                    answer = back.toString();
                    txtDisplay.setText(answer);
                }
                break;
            case R.id.btn_ac:
                fnum = 0;
                snum = 0;
                result = 0;
                txtDisplay.setText("");
                txtDisplay1.setText("");
                break;
            case R.id.btn_plusormin:
                double ops = Double.parseDouble(String.valueOf(txtDisplay.getText()));
                ops = ops * (-1);
                txtDisplay.setText(String.valueOf(ops));
                break;
            case R.id.btn_equal:
                equal();
                break;
        }
    }
}
