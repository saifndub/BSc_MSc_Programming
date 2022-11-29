package com.example.mylogin;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import androidx.annotation.Nullable;

import android.database.SQLException;
import android.widget.SimpleCursorAdapter;


public class DBHelper extends SQLiteOpenHelper {
    Context context;

    public static final String DBNAME = "Login.db";
    public static final String TABLE_NAME = "users";
    public DBHelper(Context context) {
        super(context, DBNAME, null, 1);
    }

    @Override
    public void onCreate(SQLiteDatabase MyDB) {
        MyDB.execSQL("create Table users(username TEXT primary key, useremail TEXT, password TEXT)");
    }

    @Override
    public void onUpgrade(SQLiteDatabase MyDB, int i, int i1) {
        MyDB.execSQL("drop Table if exists users");
    }

    public Boolean insertData(String username, String useremail, String password){
        SQLiteDatabase MyDB = this.getWritableDatabase();
        ContentValues contentValues= new ContentValues();
        contentValues.put("username", username);
        contentValues.put("useremail", useremail);
        contentValues.put("password", password);
        long result = MyDB.insert("users", null, contentValues);
        if(result==-1) return false;
        else
            return true;
    }

    public Boolean checkusername(String username) {
        SQLiteDatabase MyDB = this.getWritableDatabase();
        Cursor cursor = MyDB.rawQuery("Select * from users where username = ?", new String[]{username});
        if (cursor.getCount() > 0)
            return true;
        else
            return false;
    }

    public Boolean checkusernamepassword(String username, String password){
        SQLiteDatabase MyDB = this.getWritableDatabase();
        Cursor cursor = MyDB.rawQuery("Select * from users where username = ? and password = ?", new String[] {username,password});
        if(cursor.getCount()>0)
            return true;
        else
            return false;
    }

    public Cursor getdata ()
    {
        SQLiteDatabase MyDB = this.getWritableDatabase();
        Cursor cursor = MyDB.rawQuery("Select * from users", null);
        return cursor;
    }

    public SimpleCursorAdapter populateListViewFromDB(){
        SQLiteDatabase MyDB = this.getWritableDatabase();

        String columns[] = {"username", "useremail"};
        Cursor cursor = MyDB.query("users", columns,null, null,null, null, null, null);
        String[] fromFieldNames = new String[]{"username", "useremail" };
        int[] toViewIDs = new int[]{R.id.item_id, R.id.item_name, R.id.item_email};
        SimpleCursorAdapter contactAdapter = new SimpleCursorAdapter(
                context,
                R.layout.single_item,
                cursor,
                fromFieldNames,
                toViewIDs
        );
        return contactAdapter;
    }
}