package pl.wwsis.server1.service;

import java.io.IOException;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.List;
import javax.ejb.Asynchronous;
import javax.ejb.Stateless;
import javax.inject.Inject;
import javax.json.JsonObject;
import javax.json.bind.Jsonb;
import javax.json.bind.JsonbBuilder;
import javax.json.bind.JsonbException;
import pl.wwsis.server1.rest.JsonbConfig;
import pl.wwsis.server1.rest.dto.UserDTO;

@Stateless
public class SynchronizationService {
  
//  @Inject
//  HttpClientWrapper http;
//  
//  private static String SERVER2 = "http://localhost:8100/server2/rest";
//  private static String UPLOAD = "/upload";
//  
//  private List<String> serversUploadUrlsList(){
//    List<String> list = new ArrayList<>();
//    list.add(SERVER2 + UPLOAD);
//    return list;
//  }
//  
//  @Asynchronous
//  public void synchronizeUsersAcross(UserDTO userDTO) throws JsonbException, IOException, InterruptedException {
//    List<String> serversList = serversUploadUrlsList();
//    InputStream is = null;
//    Jsonb jsonb = JsonbBuilder.create();
//    for (String serverUrl : serversList) {
//      System.out.println("S:" + serverUrl + " Synchronizing user:" + userDTO.name);
//      
//      is = http.post(serverUrl, jsonb.toJson(userDTO));
//    }
//  }
}
