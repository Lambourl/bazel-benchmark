#include "bench/fib.hpp"

// RE Benchmark TU 4308 of 20000 (depth=28, stamp="default")
namespace bench_tu_4308 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4308>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4308
