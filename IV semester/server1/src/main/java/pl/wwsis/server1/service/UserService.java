package pl.wwsis.server1.service;

import java.util.List;
import java.util.stream.Collectors;

import javax.ejb.Stateless;
import javax.inject.Inject;
import pl.wwsis.server1.dao.UserDao;
import pl.wwsis.server1.model.User;
import pl.wwsis.server1.rest.dto.UserDTO;

@Stateless
public class UserService {
  @Inject
  UserDao userDao;
  @Inject
  SynchronizationService synchService;

  
  public User uploadUser(UserDTO dto) {
    User user = new User();
    user.setName(dto.name);
    user.setSurname(dto.surname);
    return userDao.upload(user);
  }
  
  
  public List<UserDTO> getUsers(){
    return userDao.getList().stream().map(a-> new UserDTO(a)).collect(Collectors.toList());
  }
  
  public UserDTO getById(Long id) {
	  User user = userDao.getById(id);
	  return new UserDTO(user);
  }
  
  public Long delete(Long id) {
	  User user = userDao.getById(id);
	  userDao.delete(user);
	  return id;
  }
}
