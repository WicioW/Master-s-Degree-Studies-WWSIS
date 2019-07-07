package pl.wwsis.server1.service;

import java.io.IOException;
import java.io.InputStream;
import java.net.URI;
import java.net.http.HttpClient;
import java.net.http.HttpClient.Version;
import java.net.http.HttpRequest;
import java.net.http.HttpResponse;
import java.net.http.HttpRequest.BodyPublishers;
import java.net.http.HttpResponse.BodyHandlers;
import java.time.Duration;
import java.util.concurrent.TimeUnit;
import javax.enterprise.context.ApplicationScoped;

@ApplicationScoped
public class HttpClientWrapper {

  HttpClient client = HttpClient.newBuilder().connectTimeout(Duration.ofMinutes(10)).version(Version.HTTP_1_1).build();
  
  
  
  public InputStream post(String urlString, String body) throws IOException, InterruptedException {
    HttpRequest request = HttpRequest.newBuilder().
        uri(URI.create(urlString)).
        header("Content-Type", "application/json").
        POST(BodyPublishers.ofString(body))
        .build();
    
    
    HttpResponse<InputStream> response = client.send(request, BodyHandlers.ofInputStream());
    if(response.statusCode() != 200) {
      TimeUnit.SECONDS.sleep(5);
      return post(urlString,body);
    }
    return response.body();
    
    
    }
}
