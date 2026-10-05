#include "bench/fib.hpp"

// RE Benchmark TU 9190 of 20000 (depth=28, stamp="default")
namespace bench_tu_9190 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9190>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9190
