
#include <mysql_global.h>
#include <mysql.h>
int main(int argc, char**argv)
{
FILE *fp=fopen("create.txt",'r');
MYSQL *conn;
char server[100],user[100],password[200],dbname[200];
conn = mysql_init(NULL);
char line[1000];
printf("enter Server Name : ");
gets(server);
printf("enter database name : ");
gets(dbname);
printf("enter mysql user for the database: ");
gets(user);
printf("enter mysql password for the above user  : ");
gets(password);
mysql_real_connect(conn, server,user,passowrd,dbname,0,NULL,0);
fgets(line,sixeof line, fp);
mysql_query(conn, line);
printf("Tabel Created\n");
return 0;
}
