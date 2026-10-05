#include "bench/fib.hpp"

// RE Benchmark TU 5435 of 20000 (depth=28, stamp="default")
namespace bench_tu_5435 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5435>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5435
