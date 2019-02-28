
# HiLo app
A simple game from:
Learn Java the Easy Way
Bryson Payne
No Starch Press

### Create project
mvn archetype:generate -DgroupId=mc.hilo \
  -DartifactId=HiLo \
  -Dpackage=mc.hilo \
  -Dversion=1.0-simple \
  -DinteractiveMode=false  

### Edit App.java

### Compile app
cd HiLo
mvn install

### Run app
java -cp target/HiLo-1.0-simple.jar \
    mc.hilo.App
  
  