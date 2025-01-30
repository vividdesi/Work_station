How to Set Up Docker on Ubuntu 22.04 to Run an Ubuntu 18.04 Container

---
Step 1: Install Docker on Ubuntu 22.04**

1. Update the System**
```bash
sudo apt update
sudo apt upgrade -y
```

2. Install Required Packages**
```bash
sudo apt install -y apt-transport-https ca-certificates curl software-properties-common
```

3. Add Docker’s Official GPG Key**
```bash
curl -fsSL https://download.docker.com/linux/ubuntu/gpg | sudo gpg --dearmor -o /usr/share/keyrings/docker-archive-keyring.gpg
```

4. Add Docker Repository**
```bash
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/docker-archive-keyring.gpg] https://download.docker.com/linux/ubuntu $(lsb_release -cs) stable" | sudo tee /etc/apt/sources.list.d/docker.list > /dev/null
```

5. Install Docker**
```bash
sudo apt update
sudo apt install -y docker-ce docker-ce-cli containerd.io
```
6. Verify Installation**
```bash
docker --version
```

---

Step 2: Pull Ubuntu 18.04 Image**

1. Pull the Image**
```bash
sudo docker pull ubuntu:18.04
```

2. Verify Image Download**
```bash
sudo docker images
```
You should see `ubuntu` with the tag `18.04` listed.

---
Step 3: Run Ubuntu 18.04 Container**

#### **1. Start a New Container**
```bash
sudo docker run -it ubuntu:18.04 /bin/bash
```
- `-it`: Run interactively with a TTY.
- `ubuntu:18.04`: Specifies the Ubuntu 18.04 image.
- `/bin/bash`: Opens a bash shell inside the container.

2. Test the Container**
Once inside, verify the Ubuntu version:
```bash
cat /etc/os-release
```

---

Step 4: (Optional) Manage Containers**

1. List Running Containers**
```bash
sudo docker ps
```

2. List All Containers (Including Stopped)**
```bash
sudo docker ps -a
```

3. Start an Existing Container**
```bash
sudo docker start <container_id>
sudo docker attach <container_id>
```

4. Remove a Container**
```bash
sudo docker rm <container_id>
```

---

Step 5: Enable Docker to Start on Boot**

1. Enable Docker**
```bash
sudo systemctl enable docker
```

2. Start Docker Service**
```bash
sudo systemctl start docker
```

---


