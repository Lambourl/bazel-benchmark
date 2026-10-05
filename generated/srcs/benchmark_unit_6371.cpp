#include "bench/fib.hpp"

// RE Benchmark TU 6371 of 20000 (depth=28, stamp="default")
namespace bench_tu_6371 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6371>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6371
