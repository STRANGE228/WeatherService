Программа WeatherService создана для считывания данных о погоде из файлов json и xml.
JsonService имеет метод getWeather с одним параметром - названием файла, который содержит данные о погоде, и  возвращает объект класса Weather с заполненными полями.
XmlService работает аналогично. Объект класса Weather можно вывести через стандартный поток вывод std::cout << weather.
