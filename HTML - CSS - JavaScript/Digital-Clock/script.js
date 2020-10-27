class DigitalClock {
  constructor(element) {
    this.element = element;
  }

  start() {
    this.update();

    setInterval(() => {
      this.update();
    }, 500);
  }

  update() {
    const time = this.getTime();
    const minuteFormatted = time.minute < 10 ? '0' + time.minute : time.minute;
    const timeFormatted = `${time.hour}:${minuteFormatted}`;
    const amPm = time.isAm ? 'AM' : 'PM';

    this.element.querySelector('.digital-clock__time').textContent = timeFormatted;
    this.element.querySelector('.digital-clock__ampm').textContent = amPm;
  }

  getTime() {
    const now = new Date();
    
    return {
      hour: now.getHours() % 12 || 12,
      minute: now.getMinutes(),
      isAm: now.getHours() < 12
    }
  }
}

const digitalClockElement = document.querySelector('.digital-clock');
const digitalClockObject = new DigitalClock(digitalClockElement);

digitalClockObject.start();

