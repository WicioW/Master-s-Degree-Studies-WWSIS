package pl.wwsis.server1;

import javax.annotation.sql.DataSourceDefinition;
import javax.ejb.Startup;


@Startup
@javax.ejb.Singleton
@DataSourceDefinition(name = "java:global/jdbc/server1DS", serverName = "localhost",
    portNumber = 5432, databaseName = "server1", user = "postgres", password = "wiciowol123",
    className = "org.postgresql.xa.PGXADataSource")
public class Configurator {

}
