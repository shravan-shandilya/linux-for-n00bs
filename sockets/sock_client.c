#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<arpa/inet.h>
int main()
{
	int res=0,client_fd,server_fd;
	client_fd = socket(AF_INET,SOCK_STREAM,0);
	struct sockaddr_in server_address;
	struct in_addr server_ip;

	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(60000);
		
	res = inet_aton("10.197.23.170",&server_ip);
	server_address.sin_addr = server_ip;

	perror("Creating client socket");
	res = connect(client_fd,(struct sockaddr *) &server_address,sizeof(server_address));
	perror("Trying to connect");






	close(client_fd);
	perror("Closing socket");

}
