set datafile separator ","
set ylabel "solar,lipo"
set xlabel "time"
set xdata time
set timefmt "%s"
set format x "%m/%d"
set grid
plot "sun.log" using 1:2 smooth bezier title 'solar',\
  "sun.log" using 1:3 title "lipo" smooth bezier 
pause 100

