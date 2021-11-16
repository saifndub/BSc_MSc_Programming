package classes;




//import .*;
import java.sql.*;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author ishan
 */
public class Config {

    private static final String USERNAME = "root";
    private static final String PASSWORD = "";
    private static final String CONN_STRING = "jdbc:mysql://root@localhost/urcms";

    public Connection conn = null;
    public String GetConnection()
    {
        try {
            conn = DriverManager.getConnection(CONN_STRING, USERNAME, PASSWORD);
            return "Connected";
        }catch(SQLException e)
        {
            return e.getMessage();
        }
        
        
    }
    public String CloseConnection()
    {
        try {
            conn.close();
            return "Connection Closed!";
        }catch(SQLException e)
        {
            return e.getMessage();
        }
    }

    
        
}
