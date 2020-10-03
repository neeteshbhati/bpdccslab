import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.MalformedURLException;
import java.net.ServerSocket;
import java.net.Socket;

class TCPServer implements Runnable{

    Socket connectionSocket;

    TCPServer (Socket connectionSocket) {
        this.connectionSocket = connectionSocket;
    }

    @Override
    public void run() {

        try {
            
            BufferedReader in = new BufferedReader(new InputStreamReader(connectionSocket.getInputStream()));            
            
            PrintWriter out = new PrintWriter(connectionSocket.getOutputStream(), true);
            
            while (true) {
                
                String data = in.readLine();                
                System.out.println("Data from Client " + Thread.currentThread().getId() + " : " + data);
                out.println(data.toUpperCase());
            }
            
        } catch (IOException ex) {
            System.out.println("Exception Occured");
        }
    }
}

public class TCPServerHandler {
   
    public static void main(String[] args) throws MalformedURLException, IOException {
        
        int port = 6969;
        ServerSocket welcomeSocket = new ServerSocket(port);

        while (true) {
            Socket connectionSocket = welcomeSocket.accept();
            Thread TCPServerInstance = new Thread(new TCPServer(connectionSocket));
            TCPServerInstance.start();
        }
       
    }
    
}



