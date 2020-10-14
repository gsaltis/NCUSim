#!/bin/sh
cp NCUSim.rc /etc/init.d/NCUSim
ln -s /etc/init.d/NCUSim /etc/rc1.d/S99NCUSim
ln -s /etc/init.d/NCUSim /etc/rc2.d/S99NCUSim
ln -s /etc/init.d/NCUSim /etc/rc3.d/S99NCUSim
ln -s /etc/init.d/NCUSim /etc/rc4.d/S99NCUSim
ln -s /etc/init.d/NCUSim /etc/rc5.d/K99NCUSim
ln -s /etc/init.d/NCUSim /etc/rc6.d/K99NCUSim
