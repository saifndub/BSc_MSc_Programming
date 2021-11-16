package workshop;
import java.sql.*;
/*
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
*/

public class conf {
    private static final String USERNAME = "root";
    private static final String PASSWORD = "";
    private static final String CONN_STRING = "jdbc:mysql://localhost:3306/ddb";
//jdbc:mysql://localhost:3306/ddb?zeroDateTimeBehavior=convertToNull [root on Default schema]
    public static void main(String[] args) {

//public class Config {

     Connection conn = null;
    //public String GetConnection()
   // {
        try {
            conn = DriverManager.getConnection(CONN_STRING,USERNAME,PASSWORD);
            //return "Connected";
            System.out.println("Connected");
            String f_name ="Nilima";
            String l_name ="Ahmed";
            String insert = "INSERT INTO person(First_name,Last_name) values('" + f_name + "','"+l_name+"')";
            Statement stmt = (Statement) conn.createStatement();
            stmt.executeUpdate(insert);
        }catch(SQLException e)
        {
            //return e.getMessage();
            System.out.println(e);
        }
    /*}
    public String CloseConnection()
    {
        try {
            conn.close();
            return "Connection Closed!";
        }catch(SQLException e)
        {
            return e.getMessage();
        }
    }*/

    }
    
}
