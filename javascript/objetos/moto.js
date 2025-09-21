class Moto {
  constructor(color = "color de fabrica") {
    this.color = color;
    this.velocidad = 0;
    this.encendida = false;
  }

  avanzar() {
    if (!this.encendida) {
      console.log("La moto debe estar encendida para avanzar");
      return;
    }
    this.velocidad = Math.max(this.velocidad, 10);
    console.log(`Moto avanzando a ${this.velocidad} km/h`);
  }

  frenar() {
    this.velocidad = Math.max(0, this.velocidad - 10);
    console.log(`Moto frenando. Velocidad: ${this.velocidad} km/h`);
    if (this.velocidad === 0) {
      console.log("Moto detenida");
    }
  }

  acelerar(incremento = 10) {
    if (!this.encendida) {
      console.log("La moto debe estar encendida para acelerar");
      return;
    }
    this.velocidad += incremento;
    console.log(`Acelerando a ${this.velocidad} km/h`);
  }

  encender() {
    this.encendida = true;
    console.log("Moto encendida");
  }

  apagar() {
    this.encendida = false;
    this.velocidad = 0;
    console.log("Moto apagada");
  }
}

// Exportar la clase, no una instancia
export { Moto };
