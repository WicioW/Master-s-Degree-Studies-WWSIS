package pl.wwsis.server1.dao;

import java.util.List;
import javax.ejb.Stateless;
import javax.persistence.EntityManager;
import javax.persistence.PersistenceContext;
import pl.wwsis.server1.model.User;

@Stateless
public class UserDao {
  
  @PersistenceContext
  public EntityManager em;

  public User upload(User user) {
    em.persist(user);
    em.flush();
    return user;
  }
  
  public List<User> getList(){
    return em.createQuery("from User", User.class).getResultList();
  }
  
  public User getById(Long id) {
	  return em.createQuery("from User where id=:id", User.class).setParameter("id", id).getSingleResult();
  }
  
  public void delete(User user) {
	  em.remove(user);
	  em.flush();
  }
}
