#!/bin/bash
pid_max=$(sysctl kernel.pid_max | awk '{print $NF}')
echo "MAX PID VALUE: $pid_max"

