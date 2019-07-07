package pl.wwsis.server1.rest;

import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import javax.json.bind.adapter.JsonbAdapter;

public class LocalDateCustomAdapter implements JsonbAdapter<LocalDate, String> {

  private final static DateTimeFormatter DATE_FORMATTER = DateTimeFormatter.ofPattern("yyyy-MM-dd");

  @Override
  public String adaptToJson(LocalDate date) throws Exception {
    return DATE_FORMATTER.format(date);
  }

  @Override
  public LocalDate adaptFromJson(String obj) throws Exception {
    return LocalDate.parse(obj, DATE_FORMATTER);
  }

}