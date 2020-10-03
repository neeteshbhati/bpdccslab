import javax.net.ssl.*;
import java.io.*;

public class HTMLWebClient {
    public static void main(String[] args) throws Exception {

        String host = "www.google.com";
        int serverport = 443;

        SSLSocketFactory factory = (SSLSocketFactory) SSLSocketFactory.getDefault();
        SSLSocket socket = (SSLSocket) factory.createSocket(host, serverport);

        PrintWriter out = new PrintWriter(new BufferedWriter(new OutputStreamWriter(socket.getOutputStream())));
        BufferedReader in = new BufferedReader(new InputStreamReader(socket.getInputStream()));

        out.println("GET / HTTP/1.0");
        out.println("Host: " + host);
        out.println();
        out.flush();

        String inputLine;

        while ((inputLine = in.readLine()) != null)
            System.out.println(inputLine);

        in.close();
        out.close();
        socket.close();
    }
}