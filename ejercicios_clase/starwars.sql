
CREATE TABLE ACTORES (
  Codigo int(11) NOT NULL,
  Nombre varchar(5) DEFAULT NULL,
  Fecha date DEFAULT NULL,
  Nacionalidad varchar(10) DEFAULT NULL,
  PRIMARY KEY (Codigo)
) 

INSERT INTO ACTORES VALUES 
(1,'Mark Hamill','1951-09-25','Estadounidense'),
(2,'Harrison Ford','1942-07-13','Estadounidense'),
(3,'Carrie Fisher','1956-10-21','Estadounidense'),
(4,'Alec Guinness','1914-04-2','Britanico'),
(5,'Anthony Daniels','1946-02-21','Britanico'),
(6,'Kenny Baker','1934-08-24','Britanico'),
(7,'Peter Mayhew','1944-05-19','Britanico'),
(8,'Peter Cushing','1913-05-25','Britanico'),
(9,'David Prowse','1935-07-1','Holandes');


CREATE TABLE NAVES (
  Codigo int(11) NOT NULL,
  Num_Tripulante int(10) DEFAULT NULL,
  Nombre varchar(20) DEFAULT NULL,
  PRIMARY KEY (Codigo)
)

INSERT INTO NAVES VALUES 
(1,),
(2,),
(3,),
(4,),
(5,);

CREATE TABLE PELICULAS (
  Codigo int(11) NOT NULL,
  Titulo varchar(20) DEFAULT NULL,
  Director varchar(20) DEFAULT NULL,
  Ano int(11) DEFAULT NULL,
  PRIMARY KEY (`Codigo`)
)

INSERT INTO PELICULAS VALUES 
(1,),
(2,),
(3,),
(4,),
(5,);

CREATE TABLE PERSONAJES (
  Codigo int(11) NOT NULL,
  Nombre varchar(20) DEFAULT NULL,
  Raza varchar(5) DEFAULT NULL,
  Grado varchar(5) DEFAULT NULL,
  Codigo_Actores int(11) DEFAULT NULL,
  CodigoSuperior_Personajes int(11) DEFAULT NULL,
  PRIMARY KEY (Codigo)
)

INSERT INTO PERSONAJES VALUES 
(),
(),
(),
(),
();

CREATE TABLE PERSONAJESPELICULAS (
  Codigo_Personajes int(11) DEFAULT NULL,
  Codigo_Peliculas int(11) DEFAULT NULL
)

INSERT INTO PERSONAJESPELICULAS VALUES 
(),
(),
(),
(),
();

CREATE TABLE PLANETAS (
  Codigo int(11) NOT NULL,
  Galaxia varchar(10) DEFAULT NULL,
  Nombre varchar(10) DEFAULT NULL,
  PRIMARY KEY (Codigo)
)

INSERT INTO PLANETAS VALUES 
(),
(),
(),
(),
();

CREATE TABLE VISITAS (
  Codigo_Naves int(11) DEFAULT NULL,
  Codigo_Planetas int(11) DEFAULT NULL,
  Codigo_Películas int(11) DEFAULT NULL
)

INSERT INTO VISITAS VALUES 
(),
(),
(),
(),
();
