install Docker in your current ubuntu version:
**********************************************
sudo apt-get remove docker docker-engine docker.io
        sudo apt-get update
        sudo apt-get install docker-ce
        docker run hello-world


step-0:
******

$ mkdir yoctotutor-imx6
$ cd yoctotutor-imx6
$ copy the Dockerfile_imx6 to current Directory
$ docker build -f Dockerfile_imx6 -t ubuntu-18.04-imx6 .
$ docker run -it ubuntu-18.04-imx6


step-1:
*******
yoctotutor@73751a8fb0cd:$ cd yocto-imx6
yoctotutor@73751a8fb0cd:~/yocto-imx6$ DISTRO=fsl-imx-fb MACHINE=mys-6ull source sources/meta-myir/tools/myir-setup-release.sh


step-2:
*******
Note: it will ask for yes option
1. press space auntill 100% shows 
2. then press y 



step-3:
*******
vim yocto-imx6/build/conf/local.conf

add below lines at last  
_______

NXP_DEMO_SRC = "git://github.com/nxp-imx-support/nxp-demo-experience.git;protocol=https"
NXP_DEMO_LIST_SRC = "git://github.com/nxp-imx-support/nxp-demo-experience-demos-list.git;protocol=https"
_______

Note: Docker cant not save data you modifies so you need to mount local pc folder and mount it

step-4:
*******
1. then exit the docker using exit command
2. open docker using


dell@gigabyte:~/work/docker$ docker run -itv "/home/dell/work/docker:/home/yoctotutor/siva" ubuntu-18.04-imx6

Note: docker run -itv    # v for volume mount means you can mount host pc folders to docker.






step-4:  build yocto
*******

bitbake virtual/kernel
