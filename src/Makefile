all: Test3DVector

Test3DVector: Test3DVector.o Vector3D.o
	gcc -o Test3DVector Test3DVector.o Vector3D.o 

Test3DVector.o: Test3DVector.c Vector3D.h
	gcc -c -o Test3DVector.o Test3DVector.c

Vector3D.o: Vector3D.c Vector3D.h
	gcc -c -o Vector3D.o Vector3D.c

clean:
	rm -f Vector3D.o Test3DVector.o Test3DVector

.PHONY: all clean