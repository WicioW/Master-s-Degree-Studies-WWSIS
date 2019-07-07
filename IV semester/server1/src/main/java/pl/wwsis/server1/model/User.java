package pl.wwsis.server1.model;

import java.io.Serializable;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;
import javax.persistence.Table;

@javax.persistence.Entity
@Table(name = "users")
public class User implements Serializable{
  private static final long serialVersionUID = -507792013940053896L;
  
  @Id
  @GeneratedValue
  private Long id;
  
  private String name;
  
  private String surname;

  public Long getId() {
    return id;
  }

  public void setId(Long id) {
    this.id = id;
  }

  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public String getSurname() {
    return surname;
  }

  public void setSurname(String surname) {
    this.surname = surname;
  }
  
  
}
