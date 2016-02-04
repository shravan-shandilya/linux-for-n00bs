#include<stdio.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<arpa/inet.h>
int main()
{
	int sock_fd = 0,res;
	struct sockaddr_in my_addr,peer_addr;
	struct in_addr ip;
	sock_fd = socket(AF_INET,SOCK_STREAM,0);
	perror("Server socket creation");
	
	//clear the my_addr structure
	memset(&my_addr,0,sizeof(struct sockaddr_in));
	perror("Clearing sock address memory");
	//clear ip address structure
	memset(&ip,0,sizeof(ip));

	my_addr.sin_family = AF_INET;
	my_addr.sin_port = htons(6000);

	//ip to binary address ??
	res = inet_aton("127.0.0.1",&ip);

	my_addr.sin_addr = ip;	

	res = bind(sock_fd,(struct sockaddr *) &my_addr,sizeof(struct sockaddr_in));
	perror("Trying to bind");	

	close(sock_fd);
	perror("Server socket closed");
}
