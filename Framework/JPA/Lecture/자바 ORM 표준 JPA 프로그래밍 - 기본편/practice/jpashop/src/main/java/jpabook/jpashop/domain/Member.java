package jpabook.jpashop.domain;

import javax.persistence.*;

@Entity
public class Member {
    @Id @GeneratedValue // 생략하면 AUTO
    @Column(name = "MEMBER_ID")
    private Long id;
    private String name;
    private String city;
    private String street;
    private String zipcode;

    // getter, setter (setter 만들때는 주의! 아무 곳에서나 set할 수 있게 되어 추적 어려워짐. 가급적이면 생성자에서 다 세팅하고 setter의 사용을 최소화)
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

    public String getCity() {
        return city;
    }

    public void setCity(String city) {
        this.city = city;
    }

    public String getStreet() {
        return street;
    }

    public void setStreet(String street) {
        this.street = street;
    }

    public String getZipcode() {
        return zipcode;
    }

    public void setZipcode(String zipcode) {
        this.zipcode = zipcode;
    }
}
