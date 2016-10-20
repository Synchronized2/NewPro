package com.example.lijh.newndk;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends Activity {

    private TextView mTextView;

    static {

        System.loadLibrary("newndk");
        
    }

    public native String hello();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        mTextView= (TextView) findViewById(R.id.main_textview);
        mTextView.setText(hello()+"");
    }
}
