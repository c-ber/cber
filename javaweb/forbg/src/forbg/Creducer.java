package forbg;

import java.io.IOException;

import org.apache.hadoop.io.LongWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapreduce.Reducer;

public class Creducer extends Reducer<Text, LongWritable, Text, LongWritable> {
	@Override
	protected void reduce(Text key, Iterable<LongWritable> values, Context context) 
			throws IOException, InterruptedException {
		// TODO Auto-generated method stub
		long count = 0;
		for(LongWritable value : values)
		{
			count += value.get();
		}
		context.write(key,  new LongWritable(count));
	}
}
