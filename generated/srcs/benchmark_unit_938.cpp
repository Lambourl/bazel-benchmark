#include "bench/fib.hpp"

// RE Benchmark TU 938 of 20000 (depth=28, stamp="default")
namespace bench_tu_938 {
constexpr unsigned long long result = ::bench::slow_fib<28, 938>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_938
