import java.util.*;  
import java.io.*;
import java.net.*;

public class ImageWebClient {
    public static void main (String[] args) throws IOException {

        URL url = new URL("https://www.bits-pilani.ac.in/Uploads/Dubai/adminforbitsdubai/Gallery/2019-11-10--11-15-59-227_12.jpg");
        HttpURLConnection httpURLConnection = (HttpURLConnection) url.openConnection();

        Map<String, List<String>> header = connection.getHeaderFields();

        header.entrySet().stream().map((temp) -> {
            System.out.print(temp.getKey() + " : ");
            return temp;
        }).forEachOrdered((temp) -> { 
            System.out.println(temp.getValue().toString());
        });

        InputStream in = new BufferedInputStream(httpURLConnection.getInputStream());
        OutputStream out = new BufferedOutputStream(new FileOutputStream("image.jpg"));

        int readByte = in.read();

        while(readByte!= -1) {
            out.write(readByte);
            readByte = in.read();
        }

        in.close();
        out.close();

        System.out.println("\nImage downloaded successfully");
    }
}
