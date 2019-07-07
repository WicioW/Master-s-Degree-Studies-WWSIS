package pl.wwsis.server1.rest.dto;

import pl.wwsis.server1.model.User;

public class UserDTO {
  
  public Long id;
  public String name;
  public String surname;
  
  public UserDTO() {}
  
  public UserDTO(User user) {
	  this.id = user.getId();
	  this.name = user.getName();
	  this.surname = user.getSurname();
  }

}
