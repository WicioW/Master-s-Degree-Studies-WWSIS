package pl.wwsis.server1.rest.service;

import java.util.List;
import javax.enterprise.context.RequestScoped;
import javax.inject.Inject;
import javax.ws.rs.Consumes;
import javax.ws.rs.DELETE;
import javax.ws.rs.GET;
import javax.ws.rs.POST;
import javax.ws.rs.Path;
import javax.ws.rs.PathParam;
import javax.ws.rs.Produces;
import javax.ws.rs.core.MediaType;
import pl.wwsis.server1.model.User;
import pl.wwsis.server1.rest.dto.UserDTO;
import pl.wwsis.server1.service.UserService;

@Path("/rest")
@Produces(MediaType.APPLICATION_JSON)
@Consumes(MediaType.APPLICATION_JSON)
@RequestScoped
public class RestService {
  
  @Inject
  UserService userService;
  
  @GET
  public List<UserDTO> getUsers() {
    return userService.getUsers();
  }
  
  @GET
  @Path("/{id:[0-9][0-9]*}")
  public UserDTO getUser(@PathParam("id") Long id) {
	  return userService.getById(id);
  }
  
  @POST
  @Path("/upload")
  public User uploadUser(UserDTO userDTO) {
    return userService.uploadUser(userDTO);
  }
  
  @DELETE
  @Path("/{id:[0-9][0-9]*}")
  public Long deleteUser(@PathParam("id") Long id) {
	  return userService.delete(id);
  }
  
}
