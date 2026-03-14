FROM ubuntu:22.04
RUN apt-get update && apt-get -y upgrade
RUN useradd -m ctf
COPY main /home/ctf
COPY ynetd /home/ctf
COPY flag.txt /home/ctf

RUN chown -R root:ctf /home/ctf

RUN chmod g+rx /home/ctf/ynetd
RUN chmod g+rx /home/ctf/main
RUN chmod g+r /home/ctf/flag.txt

USER ctf
EXPOSE 6666

CMD ["/home/ctf/ynetd", "-p", "6666", "/home/ctf/main"]

# RUN groupadd -r ctf && useradd -r -g ctf ctf


# 
# # Install some libs
# RUN apt-get update && apt-get -y upgrade
# 
# # create ctf-user
# COPY leak_me /home/ctf/
# COPY launch.sh /home/ctf/
# #set some proper permissions
# #RUN pip install inputimeout 
# RUN chown -R root:ctf /home/ctf
# RUN chmod 750 /home/ctf/leak_me
# RUN chmod 750 /home/ctf/ynetd
# RUN chmod 750 /home/ctf/launch.sh
# USER ctf
# EXPOSE 6050
# 
# CMD /home/ctf/ynetd -p 6050 /home/ctf/launch.sh
