all:sock_server.c sock_client.c
	gcc sock_server.c -o sock_server
	gcc sock_client.c -o sock_client
start:
	./sock_server
	echo "Server running"
	
connect:
	./sock_client
	echo "Client started"	

clean:
	rm sock_server sock_client	
