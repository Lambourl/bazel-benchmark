#include "bench/fib.hpp"

// RE Benchmark TU 5721 of 20000 (depth=28, stamp="default")
namespace bench_tu_5721 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5721>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5721
