Pull ubuntu images

```bash
podman pull ubuntu
````

Look at the current dowloaded images

```bash
podman images
```

Then run the container and remove it when you are done with it

```bash
podman run -it --rm ubuntu
```

Look all container process

```bash
podman ps -a
```

Give a name to the container

```bash
podman run -it --hostanme boost --name boost0 ubuntu
```

To start a container that has been stoped

```bash
podman start -a boost
```

To make a snapshot of a running image you can user `podman commit`.
Use --help to get more info: for example you can set a defautl user and default working directory.

```bash
podman commit -c USER=jfrancai -c WORKDIR=/home/jfrancai [container to commit]  [image name]
```


---

Type `help [bash command]` to get help with bash commands.

Also you can `[command] --help` to get help about a command in general that is not specific to bash.

You can also look at man bash for full bash documentation but by default man is not available in ubuntu container

---

To get more info about user and groups of the linux system run `cat /etc/passwd` and `cat /etc/group`
This file is the config file from the passwd command.

The `x` is the password but there are not stored in clear.

Password are actually stored in /etc/shadow. The `*` means there are no password.

Run `groups [username]` to see the groups you are on

If you need to type more command than just one in root you should use the command `sudo su - root` it is the proper way to do system administration

To login to dockerhub run `podman login docker.io`

---

Commands to set up the conatiner :

```bash
adduser jfrancai
apt update
apt install man
apt install less
apt install sudo
usermod -aG sudo jfrancai
```

Note :

- Less is a better pager than more, each time you have content that take more than one page you can use less instead of cat. That's cool for content browsing
-
