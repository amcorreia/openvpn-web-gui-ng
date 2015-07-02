#
# Make a tarball
#

SFPROJECT=openvpn-web-gui
SFVERSION=0.3.2b

all:	${SFPROJECT}-${SFVERSION}.tgz

${SFPROJECT}-${SFVERSION}.tgz:	README.TXT
	find ./ -type f | xargs chmod a-x
	tar -cpzvf ${SFPROJECT}-${SFVERSION}.tgz \
            --exclude "templates_c/%*" \
            --exclude "*.tgz" \
            * \
            .htaccess

