package com.company;

public class Tag {

    public String word;

    public Tag(String word) {
        this.word = word;
    }

    @Override
    public boolean equals(Object obj)
    {
        Tag d = (Tag) obj;
        if (this == obj)
            return true;
        if (obj == null)
            return false;
        if (getClass() != obj.getClass())
            return false;
        if(word == null)
        {
            if(d.word != null)
            {
                return false;
            }
        }else if(!word.equals(d.word))
        {
            return false;
        }
        return true;
    }

    @Override
    public int hashCode()
    {
        return this.word.hashCode();
    }

}
